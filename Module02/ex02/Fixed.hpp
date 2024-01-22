
#ifndef FIXED_HPP 
# define FIXED_HPP

# include <iostream>
# include <cstring>
# include <iomanip>

class Fixed{
	
	public: 
		Fixed();

		Fixed(Fixed const & src);

		Fixed(int const nbI);
		Fixed(float const nbF);
		~Fixed();

		Fixed & operator=(Fixed const & rhs);

		bool operator>(Fixed const & rhs) const;
		bool operator<(Fixed const & rhs) const;
		bool operator>=(Fixed const & rhs) const;
		bool operator<=(Fixed const & rhs) const;
		bool operator==(Fixed const & rhs) const;
		bool operator!=(Fixed const & rhs) const;

		float operator+(Fixed const & raw) const;
		float operator-(Fixed const & raw) const;
		float operator*(Fixed const & raw) const;
		float operator/(Fixed const & raw) const;

		Fixed operator++();
		Fixed operator++(int);
		Fixed operator--();
		Fixed operator--(int);

		static const Fixed & min(Fixed const & first, Fixed const & sec);
		static Fixed & min(Fixed & first, Fixed & sec);
		static const Fixed & max(Fixed const & first, Fixed const & sec);
		static Fixed & max(Fixed & first, Fixed & sec);

		int		toInt() const;
		float	toFloat() const;

		int		getRawBits() const;
		void	setRawBits(int const raw);

	private:
		int	_fixPoint;
		static int const _fracBits = 8;
};

std::ostream &	operator<<(std::ostream & out, Fixed & rhs);
std::ostream &	operator<<(std::ostream & out, Fixed const & rhs);

#endif
