import { useState, useEffect } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'
import './App.css'
import Nav from './components/navbar'
function App() {
  const [cards, setcards] = useState([])

  const fetchdata = async () => {
    let a = await fetch("https://jsonplaceholder.typicode.com/posts")
    let data = await a.json()
    setcards(data)
    console.log(data)
  }

  // useEffect(() => {
  //   fetchdata()
  // }, [])
  fetchdata()

  return (
    <>
              <Nav/>
      <div className=" flex flex-row flex-wrap">
        {cards.map((card) => {
          return (
            <div key={card.id} className="p-2 m-2 w-3xs h-3xs  border-2 border-amber-500 text-white">
              {/* <div className="card">{card.userId}</div>
              <div className="card">{card.id}</div>
              <div className="card">{card.title}</div>                                              
              <div className="card">{card.body}</div> */}
              <ul>
                <li><span  className="text-purple-700" >userId</span> :{card.userId} </li>
                <li><span className="text-purple-700">id</span> :{card.id} </li>
                <li><span className="text-purple-700">title</span> :{card.title} </li>
                <li><span className="text-purple-700">body</span> :{card.body} </li>
              </ul>

            </div>
          )
        }

        )}
      </div>

    </>
  )
}

export default App
