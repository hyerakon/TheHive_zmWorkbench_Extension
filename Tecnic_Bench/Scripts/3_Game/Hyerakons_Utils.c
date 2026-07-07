class HyerakonUtils
{
    static void EnsureDirectoriesExist(string folderPath)
	{
		if (folderPath == "")
			return;

		// Normalize separators
		folderPath.Replace("/", "\\");
	
		// Trim trailing slashes so Split doesn't end with ""
		while (folderPath.Length() > 0 && folderPath.Get(folderPath.Length() - 1) == "\\")
		{
			folderPath = folderPath.Substring(0, folderPath.Length() - 1);
		}
	
		TStringArray parts = new TStringArray;
		folderPath.Split("\\", parts);
	
		string current = "";
		for (int i = 0; i < parts.Count(); i++)
		{
			string part = parts.Get(i);
			if (part == "")
				continue;
	
			if (current == "")
				current = part;
			else
				current = current + "\\" + part;
	
			// Skip creating the prefix itself ("$profile:" / "$mission:" etc.)
			if (current.Length() > 0 && current.Get(current.Length() - 1) == ":")
				continue;
	
			if (!FileExist(current))
				MakeDirectory(current);
		}
	};
};