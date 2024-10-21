using System;

namespace Midnight_Pizza_Fight
{
    public class Player
    {
        //variables
        private int health = 100;
        private int maxHealth = 100;
        private int attackDamage = 20;
        private int healingCapacity = 15;

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
        public Player()
        {
            SpawnPlayer();
        }

        //Function
        private void SpawnPlayer()
        {
            Console.WriteLine("\n\n==================================================");
            Console.WriteLine(" 🍕 DOUGH MASTER: GUARDIAN OF THE GOLDEN CRUST 🍕");
            Console.WriteLine("==================================================\n");
            Console.WriteLine("\nDough Master: That scoundrel won't escape with my creation!");
        }
    }
}