import Footer from "./components/Footer"
import Navbar from "./components/Navbar"
import Card from "./components/card"

function App() {

  return (
    <>
      <Navbar />

      <div className="cards"  >

        <Card title="Card1" desc="this is card1" />
        <Card title="Card2" desc="this is card2" />
        <Card title="Card3" desc="this is card3" />
        <Card title="Card4" desc="this is card4" />

      </div>

      <Footer />
    </>
  )
}

export default App
