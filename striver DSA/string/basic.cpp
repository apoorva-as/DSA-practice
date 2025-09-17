//erase part of string

// class Solution {
// public:
//     string removeOccurrences(string s, string part) {
//         while(s.length()!=0 && s.find(part)<s.length()){
//             s.erase(s.find(part),part.length());
//         }
//         return s;
//     }
// };


// Replace a word

// class Solution {
// public:
//     string replaceAll(string str, string oldW, string newW) {
//         size_t pos = 0;
//         while ((pos = str.find(oldW, pos)) != string::npos) {
//             str.replace(pos, oldW.length(), newW);
//             pos += newW.length(); // move past the replaced part
//         }
//         return str;
//     }
// };


//remove all occurence of substring


// #include<string>
// #include<iostream>
// using namespace std;

// class Solution {
// public:
//     string removeOccurrences(string s, string part) {
        
//         while(s.length()!=0 && s.find(part) < s.length()) {
//             s.erase(s.find(part), part.length());
//         }
//         return s;
//     }
// };



#include<iostream> 
using namespace std;

char toLowerCase(char ch) {
    if(ch >='a' && ch <='z')
        return ch;
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(char a[], int n) {
    int s = 0;
    int e = n-1;

    while(s<=e) {
        if(toLowerCase( a[s] ) != toLowerCase( a[e] ) )
        {
            return 0;       
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

void reverse(char name[], int n) {
    int s=0;
    int e = n-1;

    while(s<e) {
        swap(name[s++], name[e--]);
    }
}

int getLength(char name[]) {
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++) {
        count++;
    }

    return count;
}

char getMaxOccCharacter(string s) {

    int arr[26] = {0};


    //create an array of count of characters
    for(int i=0; i<s.length(); i++) {
        char ch = s[i];
        //lowercase
        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }

    //find maximum occ character
    int maxi = -1, ans = 0;
    for(int i=0;i<26; i++) {
        if(maxi < arr[i]) {
            ans = i;
            maxi = arr[i];
        }
    }
    

    return 'a'+ans;

}

//remove all the adjacent duplicates in string

class Solution {
public:
    string removeDuplicates(string s) {
        string ans = "";
        for(int i=0; i<s.length(); i++){
            if(ans.length()>0 && s[i]==ans[ans.length()-1]){
                ans.pop_back();
            }
            else{
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};

//reomove parantesis

class Solution {
public:
    string removeOuterParentheses(string s) {
        int count=0; string  ans="";
       for(int i = 0; i<s.length() ;i++){
        if(s[i]==')') count--;
        if(count!=0) ans.push_back( s[i]);
        if(s[i]=='(')count++;
       }
       return ans; 
    }
};




//reverse words in string--------------------------


// class Solution {
// public:
//     string reverseWords(string s) {
//        reverse(s.begin() , s.end());
//         int i =0;
//        int l =0 ,r=0;
//        int n =s.length();

//        while(i<n){
//         while(i<n && s[i]!=' '){
//             s[r++]=s[i++];
            
//         }
//         if(l<r){
//             reverse(s.begin()+l , s.begin()+r);
//             s[r]=' ';
//             r++;
//             l=r;
//         }
//         i++;
//        }
//        s = s.substr(0,r-1);
//        return s;
       
//     }
// };

// class Solution {
// public:
//     string reverseWords(string s) {
//     stringstream ss(s);
//     string word, ans = "";
//     while (ss >> word) {
//         ans = word + (ans.empty() ? "" : " " + ans);
//     }
//     return ans;
// }
// };

class Solution {
public:
    string largestOddNumber(string num) {
         for(int i = num.size()-1; i >= 0; i--) {
            if((num[i] - '0') % 2 == 1) { // check if odd
         string s1 = num.substr(0,i+1);
            return s1;
        }
       } 
       return "";
    }
};

class Solution {
  public:
    string maxOdd(string s) {
        // your code here
        for (int i = s.length() - 1; i >= 0; i--) {

        if (s[i] % 2 != 0) {

            string s1 = s.substr(0, i + 1);

            return s1;
        }
    }

    return "";
    }
};


// longest common integer------------


// class Solution {
// public:
//     string longestCommonPrefix(vector<string>& strs) {
//         int n = strs.size();
//         if (n == 0) return "";

//         string ans = "";
        
//         for (int i = 0; i < strs[0].size(); i++) {
//             char ch = strs[0][i];
//             bool match = true;

//             for (int j = 1; j < n; j++) {
             
//                 if (i >= strs[j].size() || strs[j][i] != ch) {
//                     match = false;
//                     break;
//                 }
//             }

//             if (!match) break;
//             ans.push_back(ch);
//         }
        
//         return ans;
//     }
// };


class Solution {
  public:
    int longestCommonPrefix(string str1, string str2) {
        int n = str1.size();
        
        // check all prefixes of str1
        for (int len = n; len > 0; len--) {
            string prefix = str1.substr(0, len);
            
            // check if prefix exists in str2
            if (str2.find(prefix) != string::npos) {
                return len;
            }
        }
        
        return 0;
    }
};

// isomorphic--------

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        char map_s [128]={0};
         char map_t [128]={0};

         int n = s.size();
         for(int i =0; i<n;i++){
            if(map_s[s[i]] != map_t[t[i]] ) return false;
            map_s[s[i]] = i+1;
             map_t[t[i]] = i+1;
         }
         return true ;
    }
};



int main( ) {
/*
    char name[20];

    cout << "Enter your name " << endl;
    cin >> name;
    //name[2] = '\0';

    cout << "Your name is ";
    cout << name << endl;
    int len = getLength(name);
    cout << " Length: " << len << endl;

    reverse(name, len);
    cout << "Your name is ";
    cout << name << endl;

    cout <<" Palindrome or Not: " << checkPalindrome(name, len) << endl;

    cout << " CHARACTER is " << toLowerCase('b') << endl;
    cout << " CHARACTER is " << toLowerCase('C') << endl;
    */

   string s;
   cin >> s;

    cout << getMaxOccCharacter(s) << endl;

    return 0;
}