
#include<iostream>
#include<cstring>
using namespace std;
 
class sk{

    protected:
         string title;
         float rating;

         public:
                 sk(string a , float b) {
                    title = a;
                    rating = b;
                }

                virtual void display() {}
  
 };

 class sk_details : public sk {

    protected:
         float videolenght;
 
         public:

         sk_details(float vl , string a , float b) : sk(a,b){
             videolenght = vl;
         }

           void sk_details_display() {
             cout << " THe title of given ch is  : " << title << endl;
             cout << "THe rating is : " << rating << endl;
             cout << "THe lenght of video is : " << videolenght << endl;
          }  
 };

 class done : public sk {
    
        int words;

        public:
           done(int w , string a , float b) : sk(a , b){
               words = w;
           }
       void done_display() {
             cout << " THe title of given ch is  : " << title << endl;
             cout << "THe rating is : " << rating << endl;
             cout << "THe number of words is : " << words << endl;
           }
 };

int main() { 

    float rating, ex;
    string title;
    int words;

    // for sk_details
    title = " sanket talekar";
    rating = 3.4;
    ex = 456.0;
     sk_details sanket(ex, title, rating);
    sanket.sk_details_display();


    title = " sanket";
    rating = 3.14;
    words = 46;
     done sanket1(words, title, rating);
    sanket1.done_display();


    return 0;
}