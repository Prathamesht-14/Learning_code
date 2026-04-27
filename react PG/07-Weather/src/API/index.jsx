const URL="https://api.weatherapi.com/v1/current.json?key=fbaaa940120d4b2c90c165250250302"
export const getWeatherdataforcity = async (city) => {
   const response =await fetch(`${URL}&q=${city}&aqi=yes`)
   return await response.json();
} ;