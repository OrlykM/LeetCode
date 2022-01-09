	int k = 456787654;
	string str = to_string(k);
	int j = 0;
	for (int i = 0; i < str.size()/2; i++)
	{
		if (str[i] == str[str.size() - 1 - i])
		{
			j++;
		}
	}
	if (j == str.size()/2)
	{
		cout << "Palindrome";
		return 0;
	}
	else
	{
		cout << "Ne palindrome";
		return 0;
	}
