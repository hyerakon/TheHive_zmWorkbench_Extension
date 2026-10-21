// Requisito di lavoro (RequestedJobs) dei libri e dei fogli.
// Il lavoro del player viene letto dalla mod Job & Rewards, che sta in 5_Mission:
// qui c'e' solo l'interfaccia, l'implementazione viene registrata da
// THRB_MissionServer solo se la mod e' caricata (#ifdef TheHive_SSBrena_TH_Job_And_Rewards).
// Senza la mod il provider resta null e RequestedJobs viene ignorato.

class THRB_JobProvider
{
    // Nome del lavoro del player ("" se nessuno)
    string GetPlayerJob(PlayerBase player)
    {
        return "";
    }
};

class THRB_JobHelper
{
    static const string NOT_UNDERSTOOD_TEXT = "Ci hai provato, ma non ci hai capito niente";

    protected static ref THRB_JobProvider s_Provider;

    static void SetProvider(THRB_JobProvider provider)
    {
        s_Provider = provider;
    }

    static bool IsActive()
    {
        return s_Provider != null;
    }

    // true se la voce non chiede lavori ("" e "none" non contano)
    static bool HasNoJobRequirement(THRB_BookEntry entry)
    {
        if (!entry || !entry.RequestedJobs)
            return true;

        foreach (string job : entry.RequestedJobs)
        {
            if (!IsEmptyJob(job))
                return false;
        }

        return true;
    }

    static bool HasRequestedJob(PlayerBase player, THRB_BookEntry entry)
    {
        // Feature attiva solo con la mod Job & Rewards
        if (!s_Provider)
            return true;

        if (HasNoJobRequirement(entry))
            return true;

        if (!player)
            return false;

        string playerJob = s_Provider.GetPlayerJob(player);
        playerJob.TrimInPlace();
        playerJob.ToLower();

        if (playerJob == "")
            return false;

        foreach (string requested : entry.RequestedJobs)
        {
            if (IsEmptyJob(requested))
                continue;

            string job = requested;
            job.TrimInPlace();
            job.ToLower();

            if (job == playerJob)
                return true;
        }

        return false;
    }

    static bool IsEmptyJob(string job)
    {
        string value = job;
        value.TrimInPlace();
        value.ToLower();
        return value == "" || value == "none";
    }
};
