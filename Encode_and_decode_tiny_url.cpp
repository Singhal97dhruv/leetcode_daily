Note: This is a companion problem to the System Design problem: Design TinyURL.
TinyURL is a URL shortening service where you enter a URL such as https://leetcode.com/problems/design-tinyurl and it returns a short URL such as http://tinyurl.com/4e9iAk. Design a class to encode a URL and decode a tiny URL.

There is no restriction on how your encode/decode algorithm should work. You just need to ensure that a URL can be encoded to a tiny URL and the tiny URL can be decoded to the original URL.

Implement the Solution class:

Solution() Initializes the object of the system.
String encode(String longUrl) Returns a tiny URL for the given longUrl.
String decode(String shortUrl) Returns the original long URL for the given shortUrl. It is guaranteed that the given shortUrl was encoded by the same object.
 
  
  class Solution {
public:
    unordered_map<string,string>lu,su;
    // Encodes a URL to a shortened URL.
    string getcode(){
        string s="0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
            string temp;
            for(int i=0;i<6;i++)temp+=s[rand()%62];
        return "http://tinyurl.com/" + temp;
    }
    string encode(string longUrl) {
        if(lu.find(longUrl)!=lu.end())return lu[longUrl];
        string gc=getcode();
        while(su.find(gc)!=su.end())gc=getcode();
        su[gc]=longUrl;
        lu[longUrl]=gc;
        return lu[longUrl];
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return su[shortUrl];
    }
};

