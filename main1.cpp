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
        default:
            return -1;
            break;
    }

}
//Word processing
int process(int q,char *w,int a){

    int qq=0;//calculates a successor state
    int cucu=0;//cucu last state
        if(w[a]=='\0'){
            return q;
        }else{
            qq=delta(q,w[a]);
            printf("\n[%i,%c]",q,w[a]);
            (qq==3||qq==4||qq==6)?printf("  Accepted"):printf("  Rejected");

                cucu=process(qq,w,a+1);
        }

    return cucu;
}
bool test(char *w){

    if(process(1,w,0)== 6 ||process(1,w,0)== 3||process(1,w,0)== 4){
        return true;
    }else{
        return false;
    }
}

