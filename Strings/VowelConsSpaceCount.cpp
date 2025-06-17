# include <iostream>
# include <string>
using namespace std;

int solve(string s,int len){
    int v=0;int c=0;int w=0;
    for(int i=0;i<len;i++){
        s[i]=tolower(s[i]);
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            v++;
        }
        else if(s[i]>='a' && s[i]<='z'){
            c++;
        }
        else if(s[i]==' '){
            w++;
        }
    }
    cout<<"Vowels: "<<v<<endl;
    cout<<"Consonants: "<<c<<endl;
    cout<<"Spaces: "<<w<<endl;
}

int main(){
  string str = "Take u forward is Awesome";
  int length = str.length();
  solve(str, length);
  return 0;
}