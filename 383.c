bool canConstract(string ransom, string magzine)
{
	unordered<char, int> maps;
	for(auto s : magzine)
		maps[s] ++;
	for(auto s : ransom){
		if(maps[s]-- == 0)
			return false;
	}
	return true;
}
