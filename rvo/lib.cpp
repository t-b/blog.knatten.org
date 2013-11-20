#include "lib.h"

C getTemporaryC() {
	return C();
}

C URVO_complicated() {
  const bool param = true;
	return param ? C() : C();
}

C getLocalC() {
	C c;
	return c;
}

C NRVO_complicated() {
  const bool param = true;
  C c;
	return param ? c : c;
}

vector<C> getVectorOfC() {
	vector<C> v;
	v.push_back(C());
	return v;
}
