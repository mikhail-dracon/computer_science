class shop_worker {
 protected:
 int money;
 public:
    shop_worker();
    void work();
    void fine();
};

class casier : public shop_worker {
    protected:
    int kv_chekov;
    public:
    casier;
    void open();
    void sell();
};

class cleaner: public shop_worker {
    protected:
    int mulo;
    public:
    cleaner();
    void clean();
};
class ectrician : public shop_worker {
    protected:
    int lamp;
    public:
    ectrician();
    void replace_lamp();
};
class guard : public shop_worker {
    protected:
    int krossword;
    public:
    guard();
    void rehat_krossword();
};
class hall_worker:public shop_worker{
    protected:
        int price_tag;
        int close_box;
    public:
        hall_worker();
        void replace_price();
        void stavit_products();
};

