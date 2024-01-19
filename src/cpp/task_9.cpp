/*
 * Author:
 * Date:
 * Name:
 */

class Problem9 {
public:
    bool isSatisfied(const vector<vector<string>>& formula, const unordered_map<string, bool>& assignment) {
        for (const vector<string>& clause : formula) {
            bool isClauseSatisfied = false;
            for (const string& literal : clause) {
                string variable = literal[0] == '-' ? literal.substr(1) : literal; // Extract variable name
                bool literalValue = assignment.at(variable);
                bool negated = literal[0] == '-';
                if (literalValue != negated) { // Check if literal matches assignment
                    isClauseSatisfied = true;
                    break; // Clause is satisfied, move to the next one
                }
            }
            if (!isClauseSatisfied) {
                return false; // Clause not satisfied, formula is not satisfied
            }
        }
        return true; // All clauses are satisfied
    }
};