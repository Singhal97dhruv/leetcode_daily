class TextEditor {
public:
    string ltext,rtext;
    TextEditor() {
        
    }
    
    void addText(string text) {
        ltext+=text;
    }
    
    int deleteText(int k) {
        k=min(k,(int)ltext.size());
        ltext.resize(ltext.size()-k);
        return k;
    }
    
    string cursorLeft(int k) {
        for(;k>0 && !ltext.empty();k--){
            rtext.push_back(ltext.back());
            ltext.pop_back();
        }
        return ltext.size()<10? ltext:ltext.substr(ltext.size()-10,10);
    }
    
    string cursorRight(int k) {
        for(;k>0 && !rtext.empty();k--){
            ltext.push_back(rtext.back());
            rtext.pop_back();
        }      
        return ltext.size()<10? ltext: ltext.substr(ltext.size()-10,10);
    }
};

/**
 * Your TextEditor object will be instantiated and called as such:
 * TextEditor* obj = new TextEditor();
 * obj->addText(text);
 * int param_2 = obj->deleteText(k);
 * string param_3 = obj->cursorLeft(k);
 * string param_4 = obj->cursorRight(k);
 */