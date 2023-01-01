#include <iostream>
using namespace std;
int main() {
    double score[5];
    double sum;
    int gr = 0, we = 0, ba = 0;

    for (int i = 0; i < 5; i++) {
        cout << "\nEnter the grades :";
        cin >> score[i];
         if(score[i]<=20 && score[i]>=18){
             cout<<"Great!";
             gr++;
         }
         else if(score[i]<=17.75 && score[i]>=12){
             cout<<"Well!";
            we++;
         }
         else if(score[i]<=11.75 && score[i]>=0){
             cout<<"Bad!";
             ba++;
         }
         else cout<<"not valid! please enter the score between 0-20:";
                          }
        for (int i = 0; i < 5; i++)
            sum+=score[i];
        cout << "\n The average is : " << sum / 5.0 ;
        cout << "\n How manny great scores do we have?  = " << gr;
        cout << "\n How manny well scores do we have?  = " << we;
        cout << "\n How manny bad scores do we have?  = " << ba;
        return 0;
}

