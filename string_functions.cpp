/*
1.  getline(cin,str)->to take long string with spaces
2.  str.clear()-> make str empty
3.  s1.append(s2)-> s1+s2 (concatenation)
4.  str.assign("qgege")-> assign new value to str
5.  str.at(i)->str[i] O(1)
6.  str.begin()->str[0] O(1)
7.  s1.compare(s2)-> a.value==0 s1==s2 b.value>0 s1>s2 c.value<0 s1<s2 O(n+m)
8.  str.empty()-> value==0 str is empty value==1 str is not empty O(1)
9.  str.begin[]->str[n-1] where n is the size of the string O(1)
10. str.erase(starting_pos,len)-> erase a substring of str from starting_pos upto given len O(n)
11. str.find(subStr)->returns the starting index of the subStr O(n)
12. str.insert(starting_pos,subStr)->insert the given subStr at the given starting_pos O(n)
13. str.size()==str.length-> both return the size of the string O(1)
14. str.resize(new_len)->new_len>str.len or new_len<str.len if less than then it will cut the other letters
15. str.substr(starting_pos,len)->returns a substring of str from starting_pos upto given len
16. stoi(str)-> convert the type of string to int e.g. "777"->777
17. to_string(number)-> reverse of stoi 777->"777"


ASCII codes
A-65 Z-90
a-97 z-122
A-a=32
Z-z=32

case conversion
transform(s.begin(),s.end(),starting_point, ::toupper) //starting_point-s.begin() or any other position like s[i]
transform(s.begin(),s.end(),starting_point, ::tolower) //starting_point-s.begin() or any other position like s[i]

sorting
Ascending: sort(str.begin(),str.end())-> returns a sorted str (letters in a ascending order) it requires <algorithm>
Descending: sort(str.begin(),str.end(),greater<int>())-> returns a sorted str (letters in a descending order) it requires <algorithm>
*/
