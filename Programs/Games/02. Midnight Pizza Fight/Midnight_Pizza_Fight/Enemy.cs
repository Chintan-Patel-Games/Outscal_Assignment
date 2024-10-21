using System;

namespace Midnight_Pizza_Fight
{
    public class Enemy
    {
        //variables
        private int health = 150;
        private int maxHealth = 150;
        private int attackDamage = 15;

        public int Health
        {
            //GETTER
            get
            {
                return health;
            }
            //SETTER
            private set
            {
                // If the value provided is negative, store zero instead
                if (value < 0)
                    health = 0;
                // if the value exceeds maximum health
                else if (value > maxHealth)
                {
                    health = maxHealth;
                }
                //set the provided value if both the conditions are false
                else
                {
                    health = value;
                }
            }
        }

        //Default Constructor
        public Enemy()
        {
            SpawnEnemy();
        }

        //Function
        private void SpawnEnemy()
        {
            Console.WriteLine("\n\n==================================================");
            Console.WriteLine(" 🦹 CRUST BANDIT: NEMESIS OF ITALIAN CUISINE 🦹");
            Console.WriteLine("==================================================\n");
            Console.WriteLine("\nCrust Bandit: This delectable pizza is mine now!");
            Console.WriteLine("You'll never catch me, flour face!");
        }
    }
}