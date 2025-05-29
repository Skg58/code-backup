import React from 'react'

const login = () => {
  return (
    <div>login</div>
  )
}

export default login

// or Dynamic metadata
export async function generateMetadata({ params }) {
  return {
    title: 'AdminLogin Facebook - Connect with friends and the world around you',
  }
}