// Passed but they mentioned there's a way to do this with Highest Common Factor I need to look into. 

unsigned int	lcm(unsigned int a, unsigned int b){

	unsigned int a_multiplier = 1;
	unsigned int b_multiplier = 1;
	unsigned int a_result = 0;
	unsigned int b_result = 1;

	if(a == 0 || b == 0)
		return(0);

	while(b_result != a_result){
		if(a_result > b_result){
			b_result = b * b_multiplier;
			b_multiplier++;
		} 	
		if(b_result > a_result){
			a_result = a * a_multiplier;
			a_multiplier++;
		}
	}
	return(b_result);
}