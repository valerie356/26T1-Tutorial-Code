// bubble_tea.c
//
// Written by Valerie Chan (z5482756) on 12 March 2026
//
// This program is a simple bubble tea store used to teach functions

#include <stdio.h>

#define LARGE 'L'
#define REGULAR 'R'
#define ADDED_COST 0.5
#define BASE_TEA 10
#define BASE_TOPPINGS 5
#define BASE_COST 6.5

// enum definitions
enum bubble_tea_type {
    MILK_TEA,
    FRUIT_TEA,
    TARO_MILK,
    MATCHA_LATTE,
};

enum topping_types {
    TAPIOCA_PEARLS,
    JELLY,
    POPPING_PEARLS,
    ALOE_VERA,
};

// struct definitions
struct bubble_tea {
    enum bubble_tea_type type;
    enum topping_types topping;
    int topping_qty;
    char size;
};

struct inventory {
    int tea;
    int toppings;
};

////////////////////////////////////////////////////////////////////////////////
////////////////////////////// FUNCTION PROTOTYPES /////////////////////////////
////////////////////////////////////////////////////////////////////////////////

// TODO: Add functions prototypes here

////////////////////////////////////////////////////////////////////////////////
////////////////////////////// MAIN FUNCTION ///////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

int main(void) {
    struct inventory inventory;
    inventory.tea = BASE_TEA;
    inventory.toppings = BASE_TOPPINGS;

    // Take the user's bubble tea order
    struct bubble_tea order;
    int type;

    // Input: order
    // Ourput: order 
    // Step 1: Scan user's bubble tea order
    order = scan_order(order);

    printf("Enter topping qty: ");
    scanf("%d", &order.topping_qty);

    printf("Enter size (L for Large, R for Regular): ");
    scanf(" %c", &order.size);

    // Step 2: Check available stock
    if (inventory.tea - 1 <= 0 ||
        inventory.toppings - order.topping_qty <= 0) {
        printf("Sorry, we cannot fulfill your bubble tea order due to "
                "insufficient stock.\n");
        return 1; 
    }

    // Step 3: Calculate the cost
    double total_cost = BASE_COST;

    if (order.size == LARGE) {
        total_cost += ADDED_COST;
    }

    if (order.type == MILK_TEA ||
        order.type == TARO_MILK ||
        order.type == MATCHA_LATTE) {
        total_cost += ADDED_COST;
    }

    int count = 0;
    while (count < order.topping_qty) {
        total_cost += ADDED_COST;
        count++;
    }

    // Step 4: Print the final order and cost
    printf("Order:\n");
    printf("Type: %d\n", order.type);
    printf("Topping Qty: %d\n", order.topping_qty);
    printf("Size: %c\n", order.size);
    printf("Total Cost: %.2lf\n", total_cost);

    // Step 5: Update the stock after fulfilling the order
    if (order.size == LARGE) {
        inventory.tea -= 2;
    } else {
        inventory.tea -= 1;
    }
            
    inventory.toppings -= order.topping_qty;

    // Step 6: print the remaining inventory
    printf("The current inventory is: ");
    printf("Bubble tea(s): %d\n", inventory.tea);
    printf("Topping(s): %d\n", inventory.toppings);

    order = scan_order(order);
    return 0;
}

////////////////////////////////////////////////////////////////////////////////
///////////////////////////// FUNCTION DEFINITIONS /////////////////////////////
////////////////////////////////////////////////////////////////////////////////

// TODO: Write function definitions here

// This fucnction will scan the bubble tea order from the user
struct bubble_tea scan_order(struct bubble_tea order) {
    printf("Enter bubble tea type (0: MILK TEA, 1: FRUIT TEA, 2: TARO MILK, "
            "3: MATCHA LATTE): ");
    scanf("%d", &type);
    if (type == 0) {
        order.type = MILK_TEA;
    } else if (type == 1) {
        order.type = FRUIT_TEA;
    } else if (type == 2) {
        order.type = TARO_MILK;
    } else if (type == 3) {
        order.type = MATCHA_LATTE;
    }
    return order;
}