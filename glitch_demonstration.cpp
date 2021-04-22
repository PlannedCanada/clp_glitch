#include <map>

#include <cfloat>

#include <tgmath.h>

#include <coin/ClpSimplex.hpp>

using namespace std;

int input_constraint_cols [92] = {3,2,5,3,2,2,2,2,1,1,1,1,2,2,2,1,1,2,2,1,1,2,2,2,1,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2};
pair < int, double > * input_matrix [92] = {
  (pair<int,double>[]) {make_pair(7,-5),make_pair(8,-5),make_pair(1,10)},
  (pair<int,double>[]) {make_pair(0,1),make_pair(1,-0.01)},
  (pair<int,double>[]) {make_pair(1,-1),make_pair(5,-1),make_pair(0,-1),make_pair(2,-1),make_pair(3,-0.1)},
  (pair<int,double>[]) {make_pair(6,-1),make_pair(0,-1),make_pair(2,-1)},
  (pair<int,double>[]) {make_pair(7,-1),make_pair(3,1)},
  (pair<int,double>[]) {make_pair(8,-1),make_pair(4,1)},
  (pair<int,double>[]) {make_pair(3,-0.001),make_pair(2,1)},
  (pair<int,double>[]) {make_pair(3,-95),make_pair(9,-1)},
  (pair<int,double>[]) {make_pair(10,-1)},
  (pair<int,double>[]) {make_pair(11,-1)},
  (pair<int,double>[]) {make_pair(12,-1)},
  (pair<int,double>[]) {make_pair(13,-1)},
  (pair<int,double>[]) {make_pair(3,-185),make_pair(14,-1)},
  (pair<int,double>[]) {make_pair(3,-32),make_pair(15,-1)},
  (pair<int,double>[]) {make_pair(3,-650),make_pair(16,-1)},
  (pair<int,double>[]) {make_pair(17,-1)},
  (pair<int,double>[]) {make_pair(18,-1)},
  (pair<int,double>[]) {make_pair(3,-2),make_pair(19,-1)},
  (pair<int,double>[]) {make_pair(3,-1),make_pair(20,-1)},
  (pair<int,double>[]) {make_pair(21,-1)},
  (pair<int,double>[]) {make_pair(22,-1)},
  (pair<int,double>[]) {make_pair(3,-10),make_pair(23,-1)},
  (pair<int,double>[]) {make_pair(3,-3),make_pair(24,-1)},
  (pair<int,double>[]) {make_pair(3,-2),make_pair(25,-1)},
  (pair<int,double>[]) {make_pair(26,-1)},
  (pair<int,double>[]) {make_pair(3,-4),make_pair(27,-1)},
  (pair<int,double>[]) {make_pair(3,-15),make_pair(28,-1)},
  (pair<int,double>[]) {make_pair(29,-1)},
  (pair<int,double>[]) {make_pair(30,-1)},
  (pair<int,double>[]) {make_pair(31,-1)},
  (pair<int,double>[]) {make_pair(32,-1)},
  (pair<int,double>[]) {make_pair(33,-1)},
  (pair<int,double>[]) {make_pair(34,-1)},
  (pair<int,double>[]) {make_pair(35,-1)},
  (pair<int,double>[]) {make_pair(36,-1)},
  (pair<int,double>[]) {make_pair(37,-1)},
  (pair<int,double>[]) {make_pair(38,-1)},
  (pair<int,double>[]) {make_pair(39,-1)},
  (pair<int,double>[]) {make_pair(40,-1)},
  (pair<int,double>[]) {make_pair(41,-1)},
  (pair<int,double>[]) {make_pair(42,-1)},
  (pair<int,double>[]) {make_pair(43,-1)},
  (pair<int,double>[]) {make_pair(44,-1)},
  (pair<int,double>[]) {make_pair(45,-1)},
  (pair<int,double>[]) {make_pair(46,-1)},
  (pair<int,double>[]) {make_pair(47,-1)},
  (pair<int,double>[]) {make_pair(48,-1)},
  (pair<int,double>[]) {make_pair(49,-1)},
  (pair<int,double>[]) {make_pair(50,-1)},
  (pair<int,double>[]) {make_pair(51,-1)},
  (pair<int,double>[]) {make_pair(52,-1)},
  (pair<int,double>[]) {make_pair(53,-1)},
  (pair<int,double>[]) {make_pair(54,-1)},
  (pair<int,double>[]) {make_pair(55,-1)},
  (pair<int,double>[]) {make_pair(56,-1)},
  (pair<int,double>[]) {make_pair(57,-1)},
  (pair<int,double>[]) {make_pair(58,-1)},
  (pair<int,double>[]) {make_pair(59,-1)},
  (pair<int,double>[]) {make_pair(60,-1)},
  (pair<int,double>[]) {make_pair(61,-1)},
  (pair<int,double>[]) {make_pair(62,-1)},
  (pair<int,double>[]) {make_pair(63,-1)},
  (pair<int,double>[]) {make_pair(64,-1)},
  (pair<int,double>[]) {make_pair(65,-1)},
  (pair<int,double>[]) {make_pair(66,-1)},
  (pair<int,double>[]) {make_pair(67,-1)},
  (pair<int,double>[]) {make_pair(68,-1)},
  (pair<int,double>[]) {make_pair(69,-1)},
  (pair<int,double>[]) {make_pair(70,-1)},
  (pair<int,double>[]) {make_pair(71,-1)},
  (pair<int,double>[]) {make_pair(72,-1)},
  (pair<int,double>[]) {make_pair(73,-1)},
  (pair<int,double>[]) {make_pair(74,-1)},
  (pair<int,double>[]) {make_pair(75,-1)},
  (pair<int,double>[]) {make_pair(76,-1)},
  (pair<int,double>[]) {make_pair(77,-1)},
  (pair<int,double>[]) {make_pair(78,-1)},
  (pair<int,double>[]) {make_pair(79,-1)},
  (pair<int,double>[]) {make_pair(80,-1)},
  (pair<int,double>[]) {make_pair(81,-1)},
  (pair<int,double>[]) {make_pair(82,-1)},
  (pair<int,double>[]) {make_pair(83,-1)},
  (pair<int,double>[]) {make_pair(84,-1)},
  (pair<int,double>[]) {make_pair(85,-1)},
  (pair<int,double>[]) {make_pair(86,-1)},
  (pair<int,double>[]) {make_pair(87,-1)},
  (pair<int,double>[]) {make_pair(88,-1)},
  (pair<int,double>[]) {make_pair(89,-1)},
  (pair<int,double>[]) {make_pair(90,-1)},
  (pair<int,double>[]) {make_pair(91,-1)},
  (pair<int,double>[]) {make_pair(7,1),make_pair(4,-1)},
  (pair<int,double>[]) {make_pair(8,1),make_pair(2,-1000)}
};

double rhs_l [184] = {-0,-0,-1000,-10000,-0,-0,-0,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-0,-0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
double rhs_u [184] = {-0,-0,-1000,-10000,-0,-0,-0,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-2e+12,-0,-0,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY};
double objs [93] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1};

int main(int argc, char * argv[]) {

  CoinPackedMatrix problem_mat;
  problem_mat.setDimensions(184, 93);
  
  for (int i = 0; i < 92; i++) {
    for (int j = 0; j < input_constraint_cols[i]; j++) {
      problem_mat.modifyCoefficient(i,input_matrix[i][j].first,input_matrix[i][j].second);
    }
  }
    
  for (int i = 0; i < 92; i++) {
    problem_mat.modifyCoefficient(92+i,i,1);
    problem_mat.modifyCoefficient(92+i,93,-1);
  }
  
  ClpSimplex glitch_model;
  
  glitch_model.setOptimizationDirection(-1);
  glitch_model.loadProblem(problem_mat,NULL,
    NULL,objs,rhs_l,rhs_u);
  
  glitch_model.primal();
  
  // This returns infeasible. Now let's try the known solution. It will return constraint values within the bounds.
  
  cout << "\nNow trying the known solution.\n";
  
  double known_solution[93];
  memset(known_solution, 0, sizeof(double) * (93) );
  known_solution[5]=1000;
  known_solution[6]=10000;
  for (int i = 9; i < 93; i++) {
    known_solution[i] = 2e+12;
  }
    
  double* rhs_values = new double[184];
  memset(rhs_values, 0, sizeof(double) * (184) );
    
  problem_mat.times(known_solution,rhs_values);
  
  for (int j = 0; j < 184; j++) {
    cout << "Constraint " << j << ": " << rhs_values[j] << "\n" << "In bounds: ";
    if (rhs_values[j] <= rhs_u[j] && rhs_values[j] >= rhs_l[j]) {
      cout << "\t\tYes\n";
    } else {
      cout << "\t\tNo\n";
    }
  }
  
  return 0;
  
}