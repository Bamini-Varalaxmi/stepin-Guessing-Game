#include "unity.h"
#include "game.h"


/* Required by the unity test framework */
void setUp()
{

}
/* Required by the unity test framework */
void tearDown()
{

} 
void test_guess(void){
    int num=5, guesses=5;
    TEST_ASSERT_EQUAL_string(num, guesses,"your guess is correct");
}
int main(void){
    UNITY_BEGIN();
    RUN_TEST(test_game);
    return UNITY_END();
}
