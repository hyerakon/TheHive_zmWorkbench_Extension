#ifdef TheHive_SSBrena_TH_Job_And_Rewards
// Lavoro del player letto da TH_JOBS_AND_REWARDS.json (lista Whitelisted).
// La config viene ricaricata al massimo ogni CACHE_SECONDS per non leggere il file a ogni controllo.
class THRB_JobProviderTHJobs: THRB_JobProvider
{
    static const float CACHE_SECONDS = 300.0;

    protected ref THJobsConfig m_JobsConfig;
    protected float m_LoadedAt = -1;

    override string GetPlayerJob(PlayerBase player)
    {
        if (!player || !player.GetIdentity())
            return "";

        float now = GetGame().GetTickTime();

        if (!m_JobsConfig || m_LoadedAt < 0 || now - m_LoadedAt > CACHE_SECONDS)
        {
            m_JobsConfig = THJobsService.LoadConfig();
            m_LoadedAt = now;
        }

        if (!m_JobsConfig)
            return "";

        return THJobsService.FindJobForSteamID(m_JobsConfig, player.GetIdentity().GetPlainId(), false);
    }
};
#endif
