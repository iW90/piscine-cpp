/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bank.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inwagner <inwagner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:48:38 by inwagner          #+#    #+#             */
/*   Updated: 2023/10/17 11:17:34 by inwagner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BANK_HPP
# define BANK_HPP

# include "Account.hpp"
# include <vector>
# include <iostream>

class	Bank
{
	private:
		//atributos
		int						liquidity;
		std::vector<Account*>	clientAccounts;

	public:
		//construtor
		Bank(void);

		//destrutor
		~Bank(void);

		//getter
		int		getLiquidity(void) const;
		
		//setter
		void	createAccount(int id, int value);
		void	deleteAccount(int id);
		void	modifyAccount(int id, int newValue);

		void	giveLoan(int id, int amount);
		void	depositMoney(int id, int amount);

		const Account&			operator[](int accountId) const;
		friend std::ostream&	operator << (std::ostream& p_os, const Bank& p_bank);

};

#endif
