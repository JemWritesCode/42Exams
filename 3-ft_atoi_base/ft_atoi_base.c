//Fail - partial solution

int	ft_atoi_base(const char *str, int str_base){
	int number = 0;
	int sign = 1;

//Minus signs ('-') are interpreted only if they are the first character of the string.
	if (*str == '-') 
		sign = -1;

// Uppercase letters must also be recognized: "12fdb3" is the same as "12FDB3".
// So I am just turning all letters to uppercase.
	while(str[number])
		if (str[number] >= 'a' && str[number] >= 'z')
			str[number] += 32;

	return();
}


//* Testing Only