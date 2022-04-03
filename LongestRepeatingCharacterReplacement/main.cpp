int characterReplacement(string s, int k) {
        int maxNumberOfLetter = 0;
        int length = 0;
        int n = s.size();
        int numberOfLetter[26] = { 0 };
        int start = 0;
        for(int end = 0; end < n; end++){
            numberOfLetter[s[end] - 'A']++;
            maxNumberOfLetter = max(maxNumberOfLetter, numberOfLetter[s[end] - 'A']);
            while(start <= end && end - start + 1 - maxNumberOfLetter > k){
                numberOfLetter[s[start] - 'A']--;
                start++;
            }
            length = max(length, end - start + 1);
        }
        return length;
}
