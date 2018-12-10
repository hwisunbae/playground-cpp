// 105. Multiple Inheritance

#include <iostream>
using namespace std;


class MusicalInstrument {
    public :
    virtual void play() {
        cout << "playing instrument .. " << endl;
    }
    virtual void reset() {
        cout << "resetting instrument .." << endl;
    }
    virtual ~MusicalInstrument() {};
};
class Machine {
public:
    virtual void start() {
        cout << "starting machine .." << endl;
    }
    virtual void reset() {
        cout << "resetting machine .." << endl;
    }
    virtual ~Machine(){};
};
class Synthesizer : public Machine, public MusicalInstrument {
public:
    virtual ~Synthesizer(){};
};

int main() {
    Synthesizer * pSynth = new Synthesizer();
    
    pSynth->play();
    pSynth->start();
    pSynth->MusicalInstrument::reset();
    delete pSynth;
    return 0;
}

// multiple inheritance has alot imbiguity, involves implementation details of the derived class ; best avoided!

