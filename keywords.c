#define MAX_NAME 30

struct keytab {
	int nums; //몇번 나오냐
	char name[MAX_NAME]; 
};

struct keytab keywrds[13] = {
	
	{0,"int"},
	{0,"float"},
	{0,"return"},
	{0,"if"},
	{0,"for"},
	{0,"while"},
	{0,"goto"},
	{0,"switch"},
	{0,"case"},
	{0,"void"},
	{0,"default"},
	{0,"char"},
	{0,"do"}
	
	
};

void count_word(char *word) //내가 세려고 하는 거랑 입력된 거랑 같으면 늘림  (동일한 문자열이면 nums 값을 1씩 증가)  
{	
	int i;


	//각 keyword별로  
	for (i = 0; i< 13; i++) {
	
		//if word랑  i번째 keyword랑 같으면 
		if(strncmp(word, keywrds[i].name, strlen(keywrds[i].name))==0)
		{
			//num++;
			keywrds[i].nums++;
		} 
	    //nums++;
	}			
	

}


void print_word()
{
	int i;
	//i번째 keyword에 대해서
	for( i= 0; i < 13 ; i++)
		//printf(키워드 이름: 빈도수);
		printf("%s : %d\n", keywrds[i].name, keywrds[i].nums);	 
} 
