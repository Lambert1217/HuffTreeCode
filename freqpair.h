#ifndef FREQPAIR_H
#define FREQPAIR_H


template <class Elem>
class FreqPair
{
private:
    Elem symbol;
    int freq;
public:
    FreqPair(Elem s,int f){symbol = s; freq = f;}
    int weight(){return freq;}
    Elem val(){return symbol;}
};

#endif // FREQPAIR_H
