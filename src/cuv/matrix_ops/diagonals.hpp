#include <cuv/basics/dia_matrix.hpp>

namespace cuv{
	
	/**
	 * get the average of all diagonals of a diagonal matrix
	 * 
	 * @param dst the vector where the results are stored in
	 * @param dia the diagonal matrix where the diagonals are supposed to be summed
	 */
	template<class T, class M>
	void avg_diagonals( cuv::tensor<T,M>& dst, const cuv::dia_matrix<T,M>& dia );

}
