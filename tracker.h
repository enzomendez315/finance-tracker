#ifndef FINANCE_TRACKER_TRACKER_H
#define FINANCE_TRACKER_TRACKER_H

class Tracker {
private:

public:
    Tracker();

    int addMonthlyIncome(int amount);

    int addMonthlyExpense(int amount);

    int addOneTimeIncome(int amount);

    int addOneTimeExpense(int amount);
};

#endif //FINANCE_TRACKER_TRACKER_H
