/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bank.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:48:38 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/17 20:13:24 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BANK_HPP
# define BANK_HPP

# include "Account.hpp"
# include <map>
# include <iostream>

class	Bank
{
	private:
		//atributtes
		int						liquidity;
		//std::vector<Account*>	clientAccounts;
		std::map<int, Account*>	clientAccounts;

	public:
		//constructor
		Bank(int liquidity);

		//destructor
		~Bank(void);

		//getters
		int			getLiquidity(void) const;
		
		//setters
		Account*	createAccount(int id, int value);
		void		deleteAccount(int id);
		void		modifyAccount(int id, int newValue);

		void		giveLoan(int id, int amount);
		void		depositMoney(int id, int amount);

		//operators
		const Account&			operator[](int accountId) const;
		friend std::ostream&	operator << (std::ostream& p_os, const Bank& p_bank);
};

#endif
