#include <iostream>
#include <stdio.h>
using namespace std;
int delta(int,char);
int process(int,char*,int);
bool test(char*);

int main()
{
    char W[15];
    cout << "write the word " << endl;
    cin>>W;
    printf("[state,event] status");
    printf("\n--------------------------------");
    if(test(W)){
        printf("\nResult: The string is recognized");
    }else{
        printf("\nResult: The string is not recognized");
    }

    return 0;
}
//Transition function
int delta(int q,char sigma){

    switch(q){
        case 1:
                if(sigma=='0'){
                    return 2;
                }
        break;
        case 2:
                if(sigma=='x'){
                    return 3;
                }
                if(sigma=='X'){
                    return 4;
                }
            break;
        case 3:

            if(sigma>='0' && sigma<='7'){
                return 5;
            }
        break;
        case 4:
            if(sigma>='0' && sigma<='7'){
                return 5;
            }
            break;
        case 5:
            if(sigma>='0'&& sigma<='7'){
                return 6;
            }
            break;
        case 6:
            if(sigma>='0'&& sigma<='7'){
                return 5;
            }
            break;
        }
            return -1;

}
//Word processing
int process(int q,char *w,int a){

    int qq=0;//calculates a successor state
    int lstate=0;//lstate last state
        if(w[a]=='\0'){
            return q;
        }else{
            qq=delta(q,w[a]);
            printf("\n[%i,%c]",q,w[a]);
			if(qq==-1){//if not recognized the event, then get out of the process
				return lstate;
			}else{
				if(q==3||q==4||q==6){printf("  Accepted");
				}else{
					printf("  Rejected");
				}
                lstate=process(qq,w,a+1);
			}

        }

    return lstate;
}
bool test(char *w){

	int processillo=process(1,w,0);
    if(processillo== 6 ||processillo== 3||processillo== 4){
        return true;
    }else{
        return false;
    }
}
