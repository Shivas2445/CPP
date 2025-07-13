#include<iostream>
#include<string>
using namespace std;
 

class binary{
    private:
        string s;
    public:
        void read(void);
        bool check_binary(void);
        void ones_complement(void);
        void display(void);
};
void binary :: read(void){
    cout<<"Enter a binary number:"<<endl;
    cin>>s;
    if(check_binary()){
        cout<<"It is a binary number."<<endl;
        ones_complement();
        binary::display();
    }
    else {
        cout<<"It is not a binary number. Please enter a valid binary number."<<endl;
        read();
    }
}
bool binary::check_binary(void) {
    for (int i = 0; i < s.length(); i++) {
        if (s.at(i) != '0' && s.at(i) != '1') {
            return false;
        }
    }
    return true;
}

void binary :: ones_complement(void){
    for(int i=0;i<s.length();i++){
        if(s.at(i)=='0'){
            s.at(i)='1';
        }
        else if(s.at(i)=='1'){
            s.at(i)='0';
        }
    }
}
void binary :: display(void){
    cout<<"The one's complement of the binary number is: "<<endl;;
    for(int i=0;i<s.length();i++){
        cout<<s.at(i)<<" ";
    
    }
}
int main(){
    binary b;
    b.read();

   return 0;
}