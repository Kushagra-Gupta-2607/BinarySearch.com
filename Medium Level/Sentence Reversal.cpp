/* Problem -
https://binarysearch.com/problems/Sentence-Reversal

Q. Given a list of strings sentence where each sentence[i] is a string with single character, 
   reverse the order of the words in the sentence.

   You may assume there's no extraneous spaces in the sentence. 
   Can you do modify sentence in-place and solve in \mathcal{O}(1)O(1) space?
*/

vector<string> solve(vector<string>& sen) {
    reverse(sen.begin(), sen.end());
    int k = 0, n = sen.size();
    string s;
    for(int i = 0; i<n; i++){
        if(sen[i] == " " || i == n-1){
            if(i == n-1) s+=sen[i];
            int p = s.size()-1;
            while(k<i){
                sen[k++] = s[p--];
            }
            if(i == n-1) sen[k] = s[p];
            k++;
            s = "";
        }
        else s+=sen[i];
    }
    return sen;
}
