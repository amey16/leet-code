class TrieNode {
    char val;
    TrieNode* pointers[26];
    bool ending_here = false;
    friend class Trie;
    public:
        TrieNode(char x) {
            val = x;
            for (auto& ele:pointers)
                ele = NULL;
        }
};

class Trie {
    TrieNode* ROOT;
public:
    Trie() {
        ROOT = new TrieNode('0');
    }
    TrieNode* insertChar(TrieNode *root, char c) {
        if ((root->pointers)[c-'a']==NULL) {
            TrieNode* temp = new TrieNode(c);
            (root->pointers)[c-'a'] = temp;
            return temp;
        }
        return (root->pointers)[c-'a'];
    }
    
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        TrieNode* temp;
        temp = ROOT;
        for (auto ele:word) {
            temp = insertChar(temp, ele);
        }
        temp->ending_here = true;
    }
    
    TrieNode* searchChar(TrieNode* root, char c) {
        return (root->pointers)[c-'a'];
    }
    
    bool search(string word) {
        TrieNode * temp = ROOT;
        for (auto ele:word) {
            temp = searchChar(temp, ele);
            if (temp==NULL)
                return false;
        }
        return temp->ending_here;
    }
    
    bool startsWith(string prefix) {
        TrieNode * temp = ROOT;
        for (auto ele:prefix) {
            temp = searchChar(temp, ele);
            if (temp==NULL)
                return false;
        }
        return true;
    }
};