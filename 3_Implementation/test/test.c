#include "unity.h"
#include <parking.h>

/* Modify these two lines according to the project */
#include <parking.h>
#define PROJECT_NAME    "Parking Management"

/* Prototypes for all the test functions */
void truck( );
void car( );
void rikshaw( );
void bike( );

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_truck);
  RUN_TEST(test_car);
  RUN_TEST(test_rikshaw);
  RUN_TEST(test_bike);
  RUN_TEST(test_status);
  RUN_TEST(test_clear);
  
  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_truck(void) {
  TEST_ASSERT_EQUAL( 200, Entry successful);
  
}

void test_car(void) {
  TEST_ASSERT_EQUAL( 100, Entry successful);
  
}

void test_rikshaw(void) {
  TEST_ASSERT_EQUAL(70, Entry successful);
  
}

void test_bike(void) {
  TEST_ASSERT_EQUAL(50, Entry successful);
  
}
