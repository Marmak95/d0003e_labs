/*
 * string.c
 *
 * Created: 2022-01-24 13:56:30
 *  Author: ivarj
 */ 
int revese(char* str){
	char * eos = str;
	while(*eos!='\0')
	eos++;
	eos--;
	while(eos>=str){
		char temp = *eos;
		*eos = *str;
		*str = temp;
		eos--;
		str++;
	}
	return success;
}
int three_least_significant(long num){
	return (num-(num/1000)*1000);
}
int int_to_str(uint8_t num,char* buffer){
	char * start = buffer;
	while (num)
	{
		*buffer = (volatile char) num-(num/10)*10+48;
		num/=10;
		buffer++;
	}
	*buffer = '\0';
	revese(start);
	return success;
}