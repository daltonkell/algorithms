#ifndef __STRING__
#define __STRING__

class String{
    private:
        // declare data members
        char * array;
        int len;
    public:
        // constructors, destructor
        String();
        String(const char*);
        ~String();

        // other member funcs
        unsigned int length();
        void reverse();
        void append(const char);
};

#endif
