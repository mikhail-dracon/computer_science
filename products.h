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

