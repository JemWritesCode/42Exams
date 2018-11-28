int ft_atoi(const char *str){

int number = 0;
int sign = 1;

	while(*str == '\t' || *str == '\n' || *str == '\r' || *str == '\v' || *str == '\f' || *str == ' ' )
		str++;
	if(*str == '-')
		sign = -1;
	if(*str == '-' || *str == '+')
		str++;
	while(*str >= '0' && *str <= '9'){
		number = (number * 10) + *str - '0';
		str++;
	}
	return (number * sign);
}