import { useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'
import './App.css'

function App() {
  const [count, setCount] = useState(0)
  const [showbtn, setshowbtn] = useState(true)
  const [todos, settodos] = useState(
    [{
      tittle: "hey1",
      desc: "i am todo1"
    },
    {
      tittle: "hey2",
      desc: "i am todo2"
    },
    {
      tittle: "hey3",
      desc: "i am todo3"
    },]
  )

  // const Todo=({todo})=>{
  //   return(
  //     <>
  //     <div className="m-4 border  border-purple-400">
  //     <div className="todo">{todo.tittle}</div>
  //     <div className="todo">{todo.desc}</div>
  //     </div>
  //     </>
  //   )
  // }

  return (
    <>
      <div>
        <a href="https://vite.dev" target="_blank">
          <img src={viteLogo} className="logo" alt="Vite logo" />
        </a>
        <a href="https://react.dev" target="_blank">
          <img src={reactLogo} className="logo react" alt="React logo" />
        </a>
      </div>
      <h1>Vite + React</h1>
      <div className="card">
        <button >
          {showbtn ? "showbtn is true" : "showbtn is false"}
          {/* {showbtn&&"showbtn is true"} */}
        </button>
        {/* <Todo/> */}

        {todos.map(todo => {
          // return <Todo key={todo.tittle} todo = {todo}/>
          return (
            <div key={todo.tittle} className="m-4 border  border-purple-400">
              <div className="todo">{todo.tittle}</div>
              <div className="todo">{todo.desc}</div>
            </div>
          )
        })}

        <p>
          Edit <code>src/App.jsx</code> and save to test HMR
        </p>
      </div>
      <p className="read-the-docs">
        Click on the Vite and React logos to learn more
      </p>
      <button onClick={() => setshowbtn(!showbtn)}>Toggle showbutton</button>
    </>
  )
}

export default App
