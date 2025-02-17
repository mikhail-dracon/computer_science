class products {
 protected:
 int quantity;
 public:
    products();
    void buy();
    void sell();
};

class milk : public products {
    protected:
    int lactoza;
    public:
    milk();
    void skisnet();
    void doit();
};
class curd : public milk{
    private:
        int fat_percentage;
    public:
        curd();
        void degrease();

};
class water : public products {
    protected:
    int volume;
    public:
    water();
    void vipit();
};
class vegetables : public products {
    protected:
    int hlorophil;
    public:
    vegetables();
    void uvyanut();
};
class pepsi : public products {
    protected:
    int gasi;
    public:
    pepsi();
    void vzboltat();
};
class fruits:public products{
    protected:
        float fructose;
        float juiciness;
    public:
        fruits();
        void squeeze_juice();
        void dry();
};
class apple:public products{
    private:
        char color;
    public:
        apple();
};

