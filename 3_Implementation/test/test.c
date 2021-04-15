#include "unity.h"
#include "operations.h"

/* Modify these two lines according to the project */
#include "operations.h"
#define PROJECT_NAME   "Calculator"

/* Prototypes for all the test functions */
void test_total_ser(void);
void test_total_par(void);
void test_unit_conv1(void);
void test_unit_conv2(void);
void test_unit_conv3(void);
void test_unit_conv4(void);
void test_cal_res(void);
void test_res_val(void);



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
  RUN_TEST(test_total_ser);
  RUN_TEST(test_total_par);
  RUN_TEST(test_unit_conv1);
  RUN_TEST(test_unit_conv2);
  RUN_TEST(test_unit_conv3);
  RUN_TEST(test_unit_conv4);
  RUN_TEST(test_cal_res);
  RUN_TEST(test_res_val);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_total_ser(void) {
  TEST_ASSERT_EQUAL(90.000000, total_ser(30,20,40));
  TEST_ASSERT_EQUAL(11900.000000, total_ser(2400,4500,5000));
  TEST_ASSERT_EQUAL(7000.000000, total_ser(0,2500,4500));
  TEST_ASSERT_EQUAL(5004000.000000, total_ser(5000000,4000,0));



}

void test_total_par(void) {
  TEST_ASSERT_EQUAL(1.668823,total_par(6,5,4.3));
  TEST_ASSERT_EQUAL(318.584076,total_par(2400,4500,400));
  TEST_ASSERT_EQUAL(23.028822,total_par(45,56,299));
}

void test_cal_res(void) {
  TEST_ASSERT_EQUAL(5.000000, cal_res(12,2.4));
  TEST_ASSERT_EQUAL(3.500000, cal_res(28,8));
  TEST_ASSERT_EQUAL(5.562500, cal_res(44.5,8));
  
}

void test_res_val(void) {
  TEST_ASSERT_EQUAL(68000, res_val(6,8,0,2));
  
}

void test_unit_conv1(void) {
  TEST_ASSERT_EQUAL(46500.000000, unit_conv1(46.50));
  
}

void test_unit_conv2(void) {
  TEST_ASSERT_EQUAL(1.500000, unit_conv2(1500));
  
  
}

void test_unit_conv3(void) {
  TEST_ASSERT_EQUAL(5000000.000000, unit_conv3(5));
  

}

void test_unit_conv4(void) {
  TEST_ASSERT_EQUAL(4.000000, unit_conv4(4000000));
  
}
