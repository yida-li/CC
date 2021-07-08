#include <string>
using namespace std;
class person
{
public:
    explicit person(string);
    void setName(string);
    string getName() const;
    void sayMyName() const;

private:
    string name;
};