import React from 'react'
import { useParams } from 'react-router'


const user = () => {
    const param = useParams();
    return (
        <div>
            <h1>Hello {useParams().username}</h1>
        </div>
    )
}

export default user
