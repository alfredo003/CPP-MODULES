#include "Fixed.hpp"

Fixed::Fixed():nbr_fixed(0){}

Fixed::Fixed(const Fixed&fixed)
{
    *this = fixed;
}
Fixed& Fixed::operator=(const Fixed&fixed)
{
    if(this != &fixed)
        nbr_fixed = fixed.getRawBits();
    return (*this);
}

int Fixed::getRawBits( void ) const
{
    return this->nbr_fixed;
}
void Fixed::setRawBits( int const raw )
{
    this->nbr_fixed = raw;
}
Fixed::~Fixed(){}

Fixed::Fixed(const int nbr)
{
     this->nbr_fixed = nbr << this->nbr_fra_bits;
}

Fixed::Fixed(const float nbr_float)
{
    this->nbr_fixed = (int)roundf(nbr_float * (1 << this->nbr_fra_bits));

}

float Fixed::toFloat(void) const
{
    return (float)(this->nbr_fixed) / (1 << this->nbr_fra_bits); 
}
int Fixed::toInt(void) const
{
    return this->nbr_fixed >> this->nbr_fra_bits;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return out;
}

bool Fixed::operator>(const Fixed &fixed) const 
{
    return this->nbr_fixed > fixed.nbr_fixed;
}

bool Fixed::operator<(const Fixed &fixed) const {
    return this->nbr_fixed < fixed.nbr_fixed;
}

bool Fixed::operator>=(const Fixed &fixed) const {
    return this->nbr_fixed >= fixed.nbr_fixed;
}

bool Fixed::operator<=(const Fixed &fixed) const {
    return this->nbr_fixed <= fixed.nbr_fixed;
}

bool Fixed::operator==(const Fixed &fixed) const {
    return this->nbr_fixed == fixed.nbr_fixed;
}

bool Fixed::operator!=(const Fixed &fixed) const {
    return this->nbr_fixed != fixed.nbr_fixed;
}

Fixed Fixed::operator+(const Fixed &other) const {
    Fixed result;
    result.nbr_fixed = this->nbr_fixed + other.nbr_fixed;
    return result;
}

Fixed Fixed::operator-(const Fixed &other) const {
    Fixed result;
    result.nbr_fixed = this->nbr_fixed - other.nbr_fixed;
    return result;
}

Fixed Fixed::operator*(const Fixed &other) const {
    Fixed result;
    result.nbr_fixed = (this->nbr_fixed * other.nbr_fixed) >> this->nbr_fra_bits;
    return result;
}

Fixed Fixed::operator/(const Fixed &other) const {
    if (other.nbr_fixed == 0) {
        std::cerr << "Error: Division by zero" << std::endl;
    }
    Fixed result;
    result.nbr_fixed = (this->nbr_fixed << this->nbr_fra_bits) / other.nbr_fixed;
    return result;
}

Fixed& Fixed::operator++() {
    this->nbr_fixed++;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed temp(*this);
    this->nbr_fixed++;
    return temp;
}

Fixed& Fixed::operator--() {
    this->nbr_fixed--;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed temp(*this);
    this->nbr_fixed--;
    return temp;
}

Fixed& Fixed::min(Fixed &a, Fixed &b) {
    return (a < b) ? a : b;
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b) {
    return (a < b) ? a : b;
}

Fixed& Fixed::max(Fixed &a, Fixed &b) {
    return (a > b) ? a : b;
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b) {
    return (a > b) ? a : b;
}