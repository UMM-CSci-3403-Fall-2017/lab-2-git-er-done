#include <gtest/gtest.h>

#include "disemvowel.h"

char* testLine;
TEST(Disemvowel, HandleEmptyString) {
	testLine = disemvowel((char*) "");
  ASSERT_STREQ("", testLine);
  free(testLine);
}

TEST(Disemvowel, HandleNoVowels) {
	
	testLine = disemvowel((char*) "pqrst");
  ASSERT_STREQ("pqrst", testLine);
	free(testLine);
}

TEST(Disemvowel, HandleOnlyVowels) {	
	testLine = disemvowel((char*) "aeiouAEIOUOIEAuoiea");
  ASSERT_STREQ("", testLine);
  free(testLine);
}

TEST(Disemvowel, HandleMorrisMinnesota) {
	testLine = disemvowel((char*) "Morris, Minnesota");
  ASSERT_STREQ("Mrrs, Mnnst",testLine);
  free(testLine);
}

TEST(Disemvowel, HandlePunctuation) {
testLine = disemvowel((char*) "An (Unexplained) Elephant!");
  ASSERT_STREQ("n (nxplnd) lphnt!",testLine);
  free(testLine);
}

TEST(Disemvowel, HandleLongString) {
  char* str;
  int size;
  int i;

  size = 50000;
  str = (char*) calloc(size, sizeof(char));
  str[0] = 'x';
  str[1] = 'y';
  str[2] = 'z';
  for (i = 3; i < size-1; ++i) {
    str[i] = 'a';
  }
  str[size-1] = '\0';
  testLine = disemvowel(str);
  ASSERT_STREQ("xyz", testLine);
  free(testLine);

  free(str);
}

int main(int argc, char* argv[]) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
