#include "TypesafeCollection.h"

template<>
bool TypesafeCollection<lcio::ReconstructedParticle>::_checkCollectionType()
{
	return ( _pCollection->getTypeName()==LCIO::RECONSTRUCTEDPARTICLE ); //return true if they're equal, false otherwise
}

template<>
bool TypesafeCollection<lcio::LCFloatVec>::_checkCollectionType()
{
	return ( _pCollection->getTypeName()==LCIO::LCFLOATVEC ); //return true if they're equal, false otherwise
}

template<>
bool TypesafeCollection<lcio::LCIntVec>::_checkCollectionType()
{
	return ( _pCollection->getTypeName()==LCIO::LCINTVEC ); //return true if they're equal, false otherwise
}


template<>
bool TypesafeCollection<lcio::MCParticle>::_checkCollectionType()
{
	return ( _pCollection->getTypeName()==LCIO::MCPARTICLE ); //return true if they're equal, false otherwise
}

template<>
bool TypesafeCollection<lcio::LCRelation>::_checkCollectionType()
{
	return ( _pCollection->getTypeName()==LCIO::LCRELATION ); //return true if they're equal, false otherwise
}

template<>
bool TypesafeCollection<lcio::Vertex>::_checkCollectionType()
{
  return ( _pCollection->getTypeName()==LCIO::VERTEX); //return true if they're equal, false otherwise
}
