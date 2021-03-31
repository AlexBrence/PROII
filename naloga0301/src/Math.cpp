#include "Math.h"

Math::Math() {
}


double Math::square(const double number) {
    return number*number;
}

Circle Math::max(const Circle& c1, const Circle& c2) {
    return (Circle::diameter(c1) * pi > Circle::diameter(c2) * pi) ? c1 : c2;
}
