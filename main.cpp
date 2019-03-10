#include <stdio.h>
struct transitionFunction{
	char* stateFrom;
	char event;
	char* stateTo;
};

int lengtht(char*[]);
int main(){
	int nStates,nEvents,longi;

	char* Q[]={"q0","q1","q2"};
	char E[]={'1','0'};

	/*
	for(int i=0;i<3;i++){
		printf("%s",Q[i]);
	}*/
	/*
	printf("How many states ");
	scanf("%i",&nStates);
	printf("How many events ");
	scanf("%i",&nEvents);
	char* Q[nStates];
	char* E[nEvents];

	for(int i=0;i<nStates;i++){
		printf("State ");
		scanf("%s",&Q[i]);
	}
	for(int j=0;j<nEvents;j++){
		printf("Event ");
		scanf("%s",&E[j]);
	}*/
	for(int x=0;x<3;x++){
		printf("Q-> %s \n",Q[x]);
	}

	/*for(int k=0;k<2;k++){
		printf("E-> %s \n",E[k]);
		printf("s");
	}*/
	transitionFunction S[6];


	S[0].stateFrom="q0";
	S[0].event='0';
	S[0].stateTo="q1";

	S[1].stateFrom="q0";
	S[1].event='1';
	S[1].stateTo="q0";

	S[2].stateFrom="q1";
	S[2].event='0';
	S[2].stateTo="q1";

	S[3].stateFrom="q1";
	S[3].event='1';
	S[3].stateTo="q2";

	S[4].stateFrom="q2";
	S[4].event='0';
	S[4].stateTo="q2";

	S[5].stateFrom="q2";
	S[5].event='1';
	S[5].stateTo="q2";


	char* q0[]={"q0"};
	char* F[]={"q2"};


	char W[]={"100"};
	char ws[5];
	//longi=lengtht(W);

	//printf("longi/>%i",longi);
    for(int x=0;x<3;x++){
        ws[x]=W[x];
        printf("cara %c",ws[x]);
    }
    //printf()
	char* state[1];
		state[0]=q0[0];

		//printf("\noutput %s",state[0]);

   // printf("output %s",state[0]);

        for(int i=0;i<3;i++){
			for(int j=0;j<6;j++){
                printf("\ninssss %s",S[j].stateFrom);

				if(state[0]==S[j].stateFrom && ws[i]==S[j].event){

					state[0]=S[j].stateTo;
                    printf("\n\tstateS->%s",S[j].stateTo);
                    printf("\n\tstate-> %s",state[0]);

				}
			}
        }


		if(state[0]==F[0]){
			printf("cadena aceptada");
		}else{
			printf("cadena no aceptada");
		}







return 0;
}
/*int lengtht(char w*[]){
	int j=0;
	while(w[j]!="\0"){
		j++;
	}
	return j;
}
*/
/*#include <iostream>
#include <stdio.h>
int lenght(char*[]);
int main()
{
    char* A[]={"001","100101"};
    char* B[]={"011","10","1"};
    int longi=lenght(A);
    int longi2=lenght(B);
    /*printf("Write the symbols: ");
    scanf("%s",&A);
    printf("Write the symbols: ");
    scanf("%s",&B);*/
  /*  printf("Ot: %i\n",lenght(A));


        for(int i=0;i<lenght(A);i++){

            printf("Output: %s\n",A[i]);
        }




    return 0;
}

int lenght(char* x[]){
    int l=0,t=0;

    while(x[l]!='\0'){
        t++;
        l++;
    }

return t;
}*/
